#!/bin/bash
# filepath: add_submodules.sh

# Script para adicionar submódulos automaticamente
# Para cada pasta no diretório atual, adiciona um submódulo correspondente

echo "🔄 Adicionando submódulos para cada pasta..."

# Loop através de todas as pastas no diretório atual
for folder in */; do
    # Remove a barra final do nome da pasta
    folder_name=${folder%/}
    
    # Pula pastas que começam com ponto (ocultas)
    if [[ $folder_name == .* ]]; then
        continue
    fi
    
    # Constrói a URL do repositório
    repo_url="git@github.com:MicchelFAB/${folder_name}.git"
    
    # Caminho de destino do submódulo
    submodule_path="${folder_name}/src"
    
    echo "📁 Processando: $folder_name"
    echo "   Repository: $repo_url"
    echo "   Destino: $submodule_path"
    
    # Verifica se o diretório src já existe
    if [ -d "$submodule_path" ]; then
        echo "   ⚠️  Diretório $submodule_path já existe, pulando..."
        continue
    fi
    
    # Adiciona o submódulo
    if git submodule add "$repo_url" "$submodule_path"; then
        echo "   ✅ Submódulo adicionado com sucesso!"
    else
        echo "   ❌ Erro ao adicionar submódulo"
    fi
    
    echo ""
done

echo "🎉 Processo concluído!"
echo ""
echo "📋 Para ver os submódulos adicionados:"
echo "   git submodule status"
echo ""
echo "📋 Para inicializar e atualizar os submódulos:"
echo "   git submodule update --init --recursive"